/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_Nog.BPI_Nog_C.Nog_BuffDrone_NotifyDestroyed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDataTableRowHandle                         NogBuff                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBPI_Nog_C::Nog_BuffDrone_NotifyDestroyed(const struct FDataTableRowHandle& NogBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_BuffDrone_NotifyDestroyed");
		
		UBPI_Nog_C_Nog_BuffDrone_NotifyDestroyed_Params params {};
		params.NogBuff = NogBuff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_Nog.BPI_Nog_C.Nog_SpawnBuffDrone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDataTableRowHandle                         NogBuff                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               FromDroneMesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Nog_C::Nog_SpawnBuffDrone(const struct FDataTableRowHandle& NogBuff, bool FromDroneMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_SpawnBuffDrone");
		
		UBPI_Nog_C_Nog_SpawnBuffDrone_Params params {};
		params.NogBuff = NogBuff;
		params.FromDroneMesh = FromDroneMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_Interrupt
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHandL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Nog_C::Nog_DroneThrow_Interrupt(bool IsHandL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_Interrupt");
		
		UBPI_Nog_C_Nog_DroneThrow_Interrupt_Params params {};
		params.IsHandL = IsHandL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_Launch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsHandL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Nog_C::Nog_DroneThrow_Launch(class AActor* MyTarget, bool IsHandL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_Launch");
		
		UBPI_Nog_C_Nog_DroneThrow_Launch_Params params {};
		params.MyTarget = MyTarget;
		params.IsHandL = IsHandL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_InHand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHandL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Nog_C::Nog_DroneThrow_InHand(bool IsHandL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_InHand");
		
		UBPI_Nog_C_Nog_DroneThrow_InHand_Params params {};
		params.IsHandL = IsHandL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_Nog.BPI_Nog_C.Nog_ToggleStaticDroneBoard
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               EnableStaticBoard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Nog_C::Nog_ToggleStaticDroneBoard(bool EnableStaticBoard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_ToggleStaticDroneBoard");
		
		UBPI_Nog_C_Nog_ToggleStaticDroneBoard_Params params {};
		params.EnableStaticBoard = EnableStaticBoard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_Nog.BPI_Nog_C.Nog_SetImmuneToVehicleImpact
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Nog_C::Nog_SetImmuneToVehicleImpact(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_SetImmuneToVehicleImpact");
		
		UBPI_Nog_C_Nog_SetImmuneToVehicleImpact_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_Nog.BPI_Nog_C.Nog_MindControlled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Nog_C::Nog_MindControlled(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_MindControlled");
		
		UBPI_Nog_C_Nog_MindControlled_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_Nog.BPI_Nog_C.Nog_GetMultiTargetAttackList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              TargetList                                                 (Parm, OutParm, ZeroConstructor)
	 */
	void UBPI_Nog_C::Nog_GetMultiTargetAttackList(TArray<class AActor*>* TargetList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_GetMultiTargetAttackList");
		
		UBPI_Nog_C_Nog_GetMultiTargetAttackList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetList != nullptr)
			*TargetList = params.TargetList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_Nog.BPI_Nog_C.Nog_GetDroneMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          DroneMaterial                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Nog_C::Nog_GetDroneMaterial(class UMaterialInterface** DroneMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_GetDroneMaterial");
		
		UBPI_Nog_C_Nog_GetDroneMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DroneMaterial != nullptr)
			*DroneMaterial = params.DroneMaterial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_Nog.BPI_Nog_C.Nog_GetDroneHealthPctOfNog
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HealthPctOfNog                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Nog_C::Nog_GetDroneHealthPctOfNog(float* HealthPctOfNog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_GetDroneHealthPctOfNog");
		
		UBPI_Nog_C_Nog_GetDroneHealthPctOfNog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HealthPctOfNog != nullptr)
			*HealthPctOfNog = params.HealthPctOfNog;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_Nog.BPI_Nog_C.Nog_GetDroneContainer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakNogDroneContainerComponent*              DroneContainer                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Nog_C::Nog_GetDroneContainer(class UOakNogDroneContainerComponent** DroneContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_GetDroneContainer");
		
		UBPI_Nog_C_Nog_GetDroneContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DroneContainer != nullptr)
			*DroneContainer = params.DroneContainer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_Nog.BPI_Nog_C.Nog_BuildMultiTargetAttackList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Nog_C::Nog_BuildMultiTargetAttackList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_BuildMultiTargetAttackList");
		
		UBPI_Nog_C_Nog_BuildMultiTargetAttackList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_Nog.BPI_Nog_C.Nog_MultiTargetAttack_GetTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TargetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OptionalDefaultTarget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      MyTarget                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Nog_C::Nog_MultiTargetAttack_GetTarget(int32_t TargetIndex, class AActor* OptionalDefaultTarget, class AActor** MyTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_MultiTargetAttack_GetTarget");
		
		UBPI_Nog_C_Nog_MultiTargetAttack_GetTarget_Params params {};
		params.TargetIndex = TargetIndex;
		params.OptionalDefaultTarget = OptionalDefaultTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MyTarget != nullptr)
			*MyTarget = params.MyTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_Nog.BPI_Nog_C.Nog_DeployLaserWire
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WhichWave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      MyTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Nog_C::Nog_DeployLaserWire(int32_t WhichWave, class AActor* MyTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Nog.BPI_Nog_C.Nog_DeployLaserWire");
		
		UBPI_Nog_C_Nog_DeployLaserWire_Params params {};
		params.WhichWave = WhichWave;
		params.MyTarget = MyTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Nog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Nog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Nog.BPI_Nog_C");
		return ptr;
	}

}


