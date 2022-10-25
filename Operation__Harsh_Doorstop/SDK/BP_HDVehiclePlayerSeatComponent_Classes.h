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
	 * BlueprintGeneratedClass BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C
	 * Size -> 0x0008 (FullSize[0x01A0] - InheritedSize[0x0198])
	 */
	class UBP_HDVehiclePlayerSeatComponent_C : public UHDVehiclePlayerSeatComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0198(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void GetValidSeatConfig(class UArcVehicleSeatConfig** SeatConfig);
		void ReceiveBeginPlay();
		void OnDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void OnSeatChangeEvent(EArcVehicleSeatChangeType SeatChangeType);
		void ResetPlayerCameraConstraints(class APlayerController* PC);
		void SetupPlayerCameraConstraints(class APlayerController* PC);
		void ExecuteUbergraph_BP_HDVehiclePlayerSeatComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
