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
	 * BlueprintGeneratedClass BPI_Nog.BPI_Nog_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Nog_C : public UInterface
	{
	public:
		void Nog_BuffDrone_NotifyDestroyed(const struct FDataTableRowHandle& NogBuff);
		void Nog_SpawnBuffDrone(const struct FDataTableRowHandle& NogBuff, bool FromDroneMesh);
		void Nog_DroneThrow_Interrupt(bool IsHandL);
		void Nog_DroneThrow_Launch(class AActor* MyTarget, bool IsHandL);
		void Nog_DroneThrow_InHand(bool IsHandL);
		void Nog_ToggleStaticDroneBoard(bool EnableStaticBoard);
		void Nog_SetImmuneToVehicleImpact(bool Enable);
		void Nog_MindControlled(float Duration);
		void Nog_GetMultiTargetAttackList(TArray<class AActor*>* TargetList);
		void Nog_GetDroneMaterial(class UMaterialInterface** DroneMaterial);
		void Nog_GetDroneHealthPctOfNog(float* HealthPctOfNog);
		void Nog_GetDroneContainer(class UOakNogDroneContainerComponent** DroneContainer);
		void Nog_BuildMultiTargetAttackList();
		void Nog_MultiTargetAttack_GetTarget(int32_t TargetIndex, class AActor* OptionalDefaultTarget, class AActor** MyTarget);
		void Nog_DeployLaserWire(int32_t WhichWave, class AActor* MyTarget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
