class SelfAssignment
{
public:
	// ...
	
    SelfAssignment& operator= (const SelfAssignment& that)
    {
		// check if they are identity
        if (this == &that)
            return *this;

        // not identity, then assign that to this.
        // ...

        return *this;
    }
	
	// ...
};
