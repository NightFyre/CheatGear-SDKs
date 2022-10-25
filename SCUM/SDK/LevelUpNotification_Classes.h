#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * WidgetBlueprintGeneratedClass LevelUpNotification.LevelUpNotification_C
	 * Size -> 0x0008 (FullSize[0x02E8] - InheritedSize[0x02E0])
	 */
	class ULevelUpNotification_C : public ULevelUpNotificationWidget
	{
	public:
		class UWidgetAnimation*                                    LevelUpAnimation;                                        // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash

	public:
		class UWidgetAnimation* GetLevelUpAnimation();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
