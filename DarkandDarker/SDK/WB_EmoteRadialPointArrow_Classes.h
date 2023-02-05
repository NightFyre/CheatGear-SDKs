﻿#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * WidgetBlueprintGeneratedClass WB_EmoteRadialPointArrow.WB_EmoteRadialPointArrow_C
	 * Size -> 0x0010 (FullSize[0x02A0] - InheritedSize[0x0290])
	 */
	class UWB_EmoteRadialPointArrow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Idle;                                                    // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash

	public:
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WB_EmoteRadialPointArrow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
