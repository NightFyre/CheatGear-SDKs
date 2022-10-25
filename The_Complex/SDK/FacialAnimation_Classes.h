#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Size -> 0x0040 (FullSize[0x0B60] - InheritedSize[0x0B20])
	 */
	class UAudioCurveSourceComponent : public UAudioComponent
	{
	public:
		unsigned char                                              UnknownData_ZS8Q[0x8];                                   // 0x0B20(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CurveSourceBindingName;                                  // 0x0B28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveSyncOffset;                                         // 0x0B30(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HB47[0x2C];                                  // 0x0B34(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
