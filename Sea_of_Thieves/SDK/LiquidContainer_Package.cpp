/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x041F7C80
	 * 		Name   -> Function LiquidContainer.LiquidContainerInterface.SetLiquidLevel
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Level                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULiquidContainerInterface::SetLiquidLevel(float Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerInterface.SetLiquidLevel");
		
		ULiquidContainerInterface_SetLiquidLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041F7C50
	 * 		Name   -> Function LiquidContainer.LiquidContainerInterface.GetWantedLiquidLevel
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ULiquidContainerInterface::GetWantedLiquidLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerInterface.GetWantedLiquidLevel");
		
		ULiquidContainerInterface_GetWantedLiquidLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041F7C20
	 * 		Name   -> Function LiquidContainer.LiquidContainerInterface.GetMaxLiquidCollectionAmount
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ULiquidContainerInterface::GetMaxLiquidCollectionAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerInterface.GetMaxLiquidCollectionAmount");
		
		ULiquidContainerInterface_GetMaxLiquidCollectionAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041F7BC0
	 * 		Name   -> Function LiquidContainer.LiquidContainerInterface.GetLiquidLevel
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ULiquidContainerInterface::GetLiquidLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerInterface.GetLiquidLevel");
		
		ULiquidContainerInterface_GetLiquidLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041F7AB0
	 * 		Name   -> Function LiquidContainer.LiquidContainerInterface.CollectLiquidAmount
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DesiredAmount                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ULiquidContainerInterface::CollectLiquidAmount(float DesiredAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerInterface.CollectLiquidAmount");
		
		ULiquidContainerInterface_CollectLiquidAmount_Params params {};
		params.DesiredAmount = DesiredAmount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiquidContainerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiquidContainerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiquidContainer.LiquidContainerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041F7D80
	 * 		Name   -> Function LiquidContainer.LiquidContainerComponent.SetLiquidType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ELiquidType                                        LiquidType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULiquidContainerComponent::SetLiquidType(ELiquidType LiquidType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerComponent.SetLiquidType");
		
		ULiquidContainerComponent_SetLiquidType_Params params {};
		params.LiquidType = LiquidType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041F7D00
	 * 		Name   -> Function LiquidContainer.LiquidContainerComponent.SetLiquidLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Level                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULiquidContainerComponent::SetLiquidLevel(float Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerComponent.SetLiquidLevel");
		
		ULiquidContainerComponent_SetLiquidLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041F7BF0
	 * 		Name   -> Function LiquidContainer.LiquidContainerComponent.GetLiquidLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ULiquidContainerComponent::GetLiquidLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerComponent.GetLiquidLevel");
		
		ULiquidContainerComponent_GetLiquidLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041F7B40
	 * 		Name   -> Function LiquidContainer.LiquidContainerComponent.CollectLiquidMaterials
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMeshComponent*                              MeshComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULiquidContainerComponent::CollectLiquidMaterials(class UMeshComponent* MeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerComponent.CollectLiquidMaterials");
		
		ULiquidContainerComponent_CollectLiquidMaterials_Params params {};
		params.MeshComponent = MeshComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiquidContainerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiquidContainerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiquidContainer.LiquidContainerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiquidContainerServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiquidContainerServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiquidContainer.LiquidContainerServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiquidContainerService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiquidContainerService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiquidContainer.LiquidContainerService");
		return ptr;
	}

}


