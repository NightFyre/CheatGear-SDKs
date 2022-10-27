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
	 * DynamicClass BP_UG_INSBipod.BP_UG_INSBipod_C
	 * Size -> 0x0008 (FullSize[0x0478] - InheritedSize[0x0470])
	 */
	class UBP_UG_INSBipod_C : public UBP_UG_BipodBase_C
	{
	public:
		float                                                      K2Node_Event_DeltaSeconds;                               // 0x0470(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LCGS[0x4];                                   // 0x0474(0x0004) MISSED OFFSET (PADDING)

	public:
		void ReceiveTick(float bpp__DeltaSeconds__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
