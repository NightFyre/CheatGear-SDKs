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
	 * BlueprintGeneratedClass Mission_Ep03_GetVaultMap.Mission_Ep03_GetVaultMap_C
	 * Size -> 0x0129 (FullSize[0x0639] - InheritedSize[0x0510])
	 */
	class UMission_Ep03_GetVaultMap_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToEllies_ObjSetVar;                                // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetEllie_ObjSetVar;                                 // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ViewEllieTitleCard_ObjVar;                           // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetInstructionsForEllie_ObjSetVar;                   // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InteractWithEllie_ObjVar;                            // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_HijackVehicle_ObjSetVar;                             // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeVehicle_ObjVar;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VehicleScanned_ObjVar;                               // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseCatcnARideAndAddWeapon_ObjSetVar;                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayerUsesCatchARide_ObjVar;                         // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToHolyBroadcastCenter_ObjSetVar;                   // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToHolyBroadcastCenter_ObjVar;                      // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindVaughnsFriends_ObjSetVar;                        // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindVaughnsFriends_ObjVar;                           // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetToWaitingRoom_ObjVar;                             // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ViewMouthPieceTitleCard_ObjSetVar;                   // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MouthpieceTitleCard_ObjVar;                          // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillMouthpiece_ObjSetVar;                            // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillMouthpiece_ObjVar;                               // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetVaultKeyMap_ObjSetVar;                            // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetVaultKeyMap_ObjVar;                               // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetMockedByTyreen_ObjSetVar;                         // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ListenToTyreen_ObjVar;                               // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnMapToLilith_ObjSetVar;                         // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveMapToLilith_ObjVar;                              // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToEllies_ObjVar;                                   // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentLine;                                             // 0x05E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 Conversation;                                            // 0x05EC(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_HijackVehicle_ObjVar;                                // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindVaughnsFriends_Breadcrumb1_ObjVar;               // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindVaughnsFriends_Breadcrumb2_ObjVar;               // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindVaughnsFriends_Breadcrumb3_ObjVar;               // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindVaughnsFriends_Breadcrumb4_ObjVar;               // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlayHuskingVid_ObjVar;                               // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenWaitingRoomDoor_ObjVar;                          // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_VaughnAndLilithTalkAboutVaughnScrewingUp_ObjVar;     // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HeardEllieSayLineOnce;                                   // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnDialogSequenceFinished_41();
		void OnDialogSequenceFinished_40();
		void OnDialogSequenceFinished_39();
		void OnDialogSequenceFinished_38();
		void OnDialogSequenceFinished_37();
		void OnDialogSequenceFinished_36();
		void OnDialogSequenceFinished_35();
		void OnDialogSequenceFinished_34();
		void OnDialogSequenceFinished_33();
		void OnDialogSequenceFinished_32();
		void OnDialogSequenceFinished_31();
		void OnDialogSequenceFinished_30();
		void OnDialogSequenceFinished_29();
		void OnDialogSequenceFinished_28();
		void OnDialogSequenceFinished_27();
		void OnDialogSequenceFinished_26();
		void OnDialogSequenceFinished_25();
		void OnDialogSequenceFinished_24();
		void OnDialogSequenceFinished_23();
		void OnDialogSequenceFinished_22();
		void Set_GetVaultKeyMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetVaultKeyMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_ListenToTyreen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_GiveLilithTheMap(class UObject* Context);
		void Set_MeetEllie(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ViewEllieTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_HijackVehicle(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeVehicle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UseCatcnARideAndAddWeapon(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillMouthpiece(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetInstructionsForEllie(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindVaughnsFriends(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_InteractWithEllie(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_InteractWithEllie(class UObject* Context);
		void Advance_TakeVehicle(class UObject* Context);
		void Clear_TakeVehicle(class UObject* Context);
		void Advance_PlayerUsedCatchARide(class UObject* Context);
		void Obj_PlayerUsesCatchARide(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_ArrivedAtEllies(class UObject* Context);
		void Advance_GoToHolyBroadcastCenter(class UObject* Context);
		void Advance_PlayerArrivedAtBossArena(class UObject* Context);
		void Set_ViewMouthPieceTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MouthpieceTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToHolyBroadcastCenter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GetMockedByTyreen(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GiveMapToLilith(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_VehicleScanned(class UObject* Context);
		void Obj_VehicleScanned(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetToWaitingRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_GetToWaitingRoom(class UObject* Context);
		void CE_EllieSpeaksWhileWeAreHijacking();
		void Set_ReturnMapToLilith(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToEllies(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlayerLeftElliesVicinity(class UObject* Context);
		void MCE_PlayerEnteredElliesWithVehicle(class UObject* Context);
		void Obj_GetVaultKeyMap_Objective_PROXY();
		void Obj_GetVaultKeyMap_Objective_PROXY_1();
		void Obj_GetVaultKeyMap_Objective_PROXY_2();
		void Obj_HijackVehicle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_HijackVehicle(class UObject* Context);
		void Obj_FindVaughnsFriends_Breadcrumb1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindVaughnsFriends_Breadcrumb2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindVaughnsFriends_Breadcrumb3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindVaughnsFriends_Breadcrumb4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_FindVaughnsFriends_Breadcrumb1(class UObject* Context);
		void Advance_FindVaughnsFriends_Breadcrumb2(class UObject* Context);
		void Advance_FindVaughnsFriends_Breadcrumb3(class UObject* Context);
		void Advance_FindVaughnsFriends_Breadcrumb4(class UObject* Context);
		void Obj_PlayHuskingVid(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlayHuskingVid(class UObject* Context);
		void Obj_OpenWaitingRoomDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Update_PlayerCrossedBridge(class UObject* Context);
		void Update_PlayerPassesOldGasStation(class UObject* Context);
		void Update_PlayerGetsToSacrificeMap(class UObject* Context);
		void Update_EllieCommentsOnBandits(class UObject* Context);
		void Update_EllieRecommendsHijacking(class UObject* Context);
		void Obj_VaughnAndLilithTalkAboutVaughnScrewingUp(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Advance_VaughnAndLilithTalkAboutVaughnScrewingUp(class UObject* Context);
		void MissionKickoff();
		void Set_KillMouthpiece(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToHolyBroadcastCenter(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindVaughnsFriends(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToEllies(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void CE_UpdatePlayHuskingVid();
		void ExecuteUbergraph_Mission_Ep03_GetVaultMap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
