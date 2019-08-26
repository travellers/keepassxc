
#ifndef FINGERPRINT_H
#define FINGERPRINT_H

struct Fingerprint
{
    static bool OpenSession(unsigned long *pSessionHandle);
    static bool CheckFingerprint(unsigned long sessionHandle);
    static bool EnumEnrollments();

};

#endif