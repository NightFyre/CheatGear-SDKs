#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Class FacialAnimation.AudioCurveSourceComponent
	 * Size -> 0x0040 (FullSize[0x0720] - InheritedSize[0x06E0])
	 */
	class UAudioCurveSourceComponent : public UAudioComponent
	{
	public:
		unsigned char                                              UnknownData_UYDZ[0x8];                                   // 0x06E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CurveSourceBindingName;                                  // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveSyncOffset;                                         // 0x06F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CVLJ[0x2C];                                  // 0x06F4(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
