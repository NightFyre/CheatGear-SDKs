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
	 * DynamicClass BP_WidgetGameModeFilter.BP_WidgetGameModeFilter_C
	 * Size -> 0x0038 (FullSize[0x0EA0] - InheritedSize[0x0E68])
	 */
	class UBP_WidgetGameModeFilter_C : public UWidgetGamemodeFilter
	{
	public:
		class FText                                                AllowedGameModeKey;                                      // 0x0E68(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                CallFunc_StringTableIdAndKeyFromText_OutTableId;         // 0x0E80(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CallFunc_StringTableIdAndKeyFromText_OutKey;             // 0x0E88(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_CustomEvent_isCoop;                               // 0x0E98(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_CustomEvent_isVersus;                             // 0x0E99(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_CustomEvent_isArcade;                             // 0x0E9A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEW9[0x5];                                   // 0x0E9B(0x0005) MISSED OFFSET (PADDING)

	public:
		void ApplyAllowedGameModes(bool bpp__isCoop__pf, bool bpp__isVersus__pf, bool bpp__isArcade__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
