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
	 * WidgetBlueprintGeneratedClass BP_GameplayNotificationsContainer.BP_GameplayNotificationsContainer_C
	 * Size -> 0x001C (FullSize[0x024C] - InheritedSize[0x0230])
	 */
	class UBP_GameplayNotificationsContainer_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInvalidationBox*                                    InvalidationBox_1;                                       // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBoxContainer;                                    // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    MaxShownNotifications;                                   // 0x0248(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PruneNotifications();
		void AddPlayerTeamKillWarningNotification(int32_t Kills, int32_t Limit);
		void GetWeaponName(class UClass* CauserClass, class UClass* DamageType, class FText* LocalizedName);
		void AddNotification(class FText* Text);
		void AddPlayerKillNotification(struct FPlayerKillNotice* Notice);
		void AddObjectiveDestroyedNotification(class AObjectiveDestructible* Objective, unsigned char OldOwners, unsigned char NewOwners, TArray<class AINSPlayerState*>* Attackers);
		void BindEvents();
		void AddObjectiveCaptureNotification(class AObjectiveCapturable* Objective, unsigned char OldOwners, unsigned char NewOwners, TArray<class AINSPlayerState*>* Capturers);
		void GetFormattedPlayerList(TArray<class AINSPlayerState*>* Players, class FText* FormattedNames);
		void Construct();
		void ExecuteUbergraph_BP_GameplayNotificationsContainer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
