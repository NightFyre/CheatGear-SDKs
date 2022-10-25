#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * BlueprintGeneratedClass BP_HDVehicleBase.BP_HDVehicleBase_C
	 * Size -> 0x00C0 (FullSize[0x0388] - InheritedSize[0x02C8])
	 */
	class ABP_HDVehicleBase_C : public AArcBaseVehicle
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     EngineSound;                                             // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWheeledVehicleMovementComponentNW*                  VehicleMovementOWI;                                      // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<class FName, class UAnimSequenceBase*>                DriverAnimSet;                                           // 0x02E8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly
		TMap<class FName, class UAnimSequenceBase*>                PassengerAnimSet;                                        // 0x0338(0x0050) Edit, BlueprintVisible, BlueprintReadOnly

	public:
		void InpActEvt_Jump_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
		void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue);
		void Used(class AActor* Invoker);
		void NotifyPlayerSeatChangeEvent(class APlayerState* Player, class UArcVehicleSeatConfig* ToSeat, class UArcVehicleSeatConfig* FromSeat, EArcVehicleSeatChangeType SeatChangeEvent);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_HDVehicleBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
