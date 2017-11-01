/* #CC
       Zey_S : //z 17-10-31 14:39:24 L.61 '33636 T3202398260.K.F2884300044-+----+----+----+----+
		//k
       Zey_E : //z 17-10-31 14:39:24 L.61 '33636 T3202398260.K---+----+----+----+----+----+----+
       Zcl_S : //z 17-10-31 14:39:24 L.61 '33636 T3202398260.K---+----+----+----+----+----+----+
       Zcl_E : //z 17-10-31 14:39:24 L.61 '33636 T3202398260.K---+----+----+----+----+----+----+
      ZdoIdx : //z 17-10-31 14:39:24 L.61 '33636 T3202398260.K---+----+----+----+----+----+----+
      KmtIdx : //z 17-10-31 15:01:15 L.61 '32325 T195053642 .K ~4   --+----+----+----+----+----+
     Zndex_S : //z 17-10-31 14:39:24 L.61 '33636 T3202398260.K---+----+----+----+----+----+----+
      L21, 1://k 2117-10-31 14:39 zn#1 init
      L25, 2://k 2017-10-31 15:01 zn#4 得到位置信息
      L33, 3://k 2017-10-31 15:00 zn#3 输出位置信息
      L45, 4://k 2017-10-31 15:00 zn#2 shutdown
     Zndex_E : //z 17-10-31 15:01:22 L.61 '32318 T195053672 .K ~21  --+----+----+----+----+----+
\* #HE //z 2017-10-31 14:39:24 L.61 '33636 BG57IV3 T3202398260.K*******************************/

int main()
{
    vr::HmdError err;

    //k 2017-10-31 14:39 zn#1 init
    vr::IVRSystem *vrSystem = vr::VR_Init(&err, vr::EVRApplicationType::VRApplication_Scene);

    vr::TrackedDevicePose_t pose_array[vr::k_unMaxTrackedDeviceCount];
	//k 2017-10-31 15:01 zn#4 得到位置信息
    vrSystem->GetDeviceToAbsoluteTrackingPose(vr::TrackingUniverseOrigin::TrackingUniverseStanding, 0.0f, pose_array, vr::k_unMaxTrackedDeviceCount);

    int idx = 0;
    for (vr::TrackedDeviceIndex_t i = 0; i < vr::k_unMaxTrackedDeviceCount; i++)
    {
        vr::TrackedDevicePose_t pose = pose_array[i];

		//k 2017-10-31 15:00 zn#3 输出位置信息
        if (pose.bPoseIsValid && vrSystem->GetTrackedDeviceClass(i) == vr::TrackedDeviceClass::TrackedDeviceClass_TrackingReference)
        {
            vr::HmdMatrix34_t &m = pose.mDeviceToAbsoluteTracking;
            printf("b%d origin %f %f %f matrix %f %f %f %f %f %f %f %f %f\n", idx++,
                   m.m[0][3], m.m[1][3], m.m[2][3],
                   m.m[0][0], m.m[0][1], m.m[0][2], m.m[1][0], m.m[1][1], m.m[1][2], m.m[2][0], m.m[2][1], m.m[2][2]);
        }
    }

    system("pause");

	//k 2017-10-31 15:00 zn#2 shutdown
    vr::VR_Shutdown();
    return 0;
}
