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
	 * WidgetBlueprintGeneratedClass BP_WaveCounterNotifcation.BP_WaveCounterNotifcation_C
	 * Size -> 0x0021 (FullSize[0x0251] - InheritedSize[0x0230])
	 */
	class UBP_WaveCounterNotifcation_C : public UUserWidget
	{
	public:
		class UWidgetAnimation*                                    NotifcationAnimLeft;                                     // 0x0230(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    NotifcationAnimRight;                                    // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             NotificationBorder;                                      // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          WavesAltered;                                            // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              FactionId;                                               // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FSlateColor GetNotificationColor();
		void UpdateWaveCounterNotification(int32_t WavesChanged, bool IsRightWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
