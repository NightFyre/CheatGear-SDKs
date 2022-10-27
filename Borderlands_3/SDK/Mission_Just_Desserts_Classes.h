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
	 * BlueprintGeneratedClass Mission_Just_Desserts.Mission_Just_Desserts_C
	 * Size -> 0x011D (FullSize[0x062D] - InheritedSize[0x0510])
	 */
	class UMission_Just_Desserts_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                SET_Get_EggsGunpowder_ObjSetVar;                         // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GetEggs_ObjVar;                                      // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GetGunPowder_ObjVar;                                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GiveBeatriceIngredients_ObjSetVar;                   // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GiveBeatriceIngredients_ObjVar;                      // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Get_Candles_ObjSetVar;                               // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GetCandles_ObjVar;                                   // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_Get_Cake_ObjSetVar;                                  // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GetCake_ObjVar;                                      // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnToBeatrice_ObjSetVar;                          // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_ReturnToBeatrice_ObjVar;                             // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_GoToCave_ObjSetVar;                                  // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_GoToCave_ObjVar;                                     // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToBeatriceWithCandles_ObjVar;                  // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_ReturnWithCandles_ObjSetVar;                         // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_AssembleCake_ObjSetVar;                              // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_AssembleCake_ObjVar;                                 // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_PlaceCandles_ObjSetVar;                              // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_PlaceCandles_ObjVar;                                 // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_RingDoorbell_ObjSetVar;                              // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_RingDoorbell_ObjVar;                                 // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_LightCandles_ObjSetVar;                              // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_LightCandles_ObjVar;                                 // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_KickCart_ObjSetVar;                                  // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_KickCart_ObjVar;                                     // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                SET_WaitForPayment_ObjSetVar;                            // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   OBJ_WaitForPayment_ObjVar;                               // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_OBJ_WaitForExplosion_ObjVar;                         // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_PlaceCakeBottom_ObjVar;                              // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_PlaceCakeMiddle_ObjVar;                              // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_PlaceCakeTop_ObjVar;                                 // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INV_DestroyEggMembranes_ObjVar;                          // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   INVS_CollectionCounter_ObjVar;                           // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BeatriceInKitchen_ObjVar;                            // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ThingsCollected;                                         // 0x0628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ActiveLoad_WaitForIt;                                    // 0x062C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
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
		void OnDialogSequenceFinished_21();
		void PlayerGotBackWithCandles(class UObject* Context);
		void SET_ReturnWithCandles(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void SET_AssembleCake(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_AssembleCake(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void PlayerPlacedBottom(class UObject* Context);
		void SET_PlaceCandles(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_PlaceCandles(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void PlayerPlacedCandles(class UObject* Context);
		void SET_RingDoorbell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_RingDoorbell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void PlayerRangDoorbell(class UObject* Context);
		void SET_LightCandles(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_LightCandles(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void PlayerLitCandles(class UObject* Context);
		void SET_KickCart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_KickCart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void PlayerStartedCart(class UObject* Context);
		void SET_WaitForPayment(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_WaitForPayment(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void PlayerWaitedForPayment(class UObject* Context);
		void INV_OBJ_WaitForExplosion(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void CakeExploded(class UObject* Context);
		void Obj_ReturnToBeatriceWithCandles(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void PlayerIsAtCave(class UObject* Context);
		void OBJ_GoToCave(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GoToCave(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void PlayerReturnedToBeatrice(class UObject* Context);
		void PlayerGotCandles(class UObject* Context);
		void PlayerGaveBeatriceIngredients(class UObject* Context);
		void OBJ_ReturnToBeatrice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_ReturnToBeatrice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GetCake(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_Get_Cake(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GetCandles(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_Get_Candles(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GiveBeatriceIngredients(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_GiveBeatriceIngredients(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void OBJ_GetGunPowder(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void OBJ_GetEggs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void SET_Get_EggsGunpowder(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void PlayerIsNearPachinko(class UObject* Context);
		void INV_PlaceCakeBottom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_PlaceCakeMiddle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void INV_PlaceCakeTop(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void PlayerPlacedMiddle(class UObject* Context);
		void PlayerPlacedTop(class UObject* Context);
		void PlayerCakeAssemblyUpdate(class UObject* Context);
		void INV_DestroyEggMembranes(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UPDATE_DestroyEggMembrane(class UObject* Context);
		void PlayerIsNearEggs(class UObject* Context);
		void MissionKickoff();
		void INVS_CollectionCounter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BeatriceInKitchen(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BeatriceInKitchen_Objective_PROXY();
		void Update_BeatriceInKitchen(class UObject* Context);
		void ExecuteUbergraph_Mission_Just_Desserts(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
