// the access specifier used when inheriting controls how base class members
// are seen inside the derived class

// public inheritance    — public stays public, protected stays protected, private stays private
// protected inheritance — public becomes protected, protected stays protected, private stays private
// private inheritance   — public becomes private, protected becomes private, private stays private

// KEY RULE: private members of the base class are NEVER accessible in derived classes
//           no matter which inheritance type you use — private always stays private

// most common is public inheritance — preserves original access levels
// protected and private inheritance are rare and used for special cases
