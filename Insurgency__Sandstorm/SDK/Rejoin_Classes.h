#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Rejoin.RejoinCheck
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	class URejoinCheck : public UObject
	{
	public:
		ERejoinStatus                                              LastKnownStatus;                                         // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRejoinAfterCheck;                                       // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAttemptingRejoin;                                       // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EWRY[0xF5];                                  // 0x002B(0x00F5) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
