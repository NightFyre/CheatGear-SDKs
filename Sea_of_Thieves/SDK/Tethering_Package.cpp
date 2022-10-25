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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCordRenderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCordRenderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tethering.CordRenderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCordRenderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCordRenderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tethering.CordRenderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035FBDC0
	 * 		Name   -> Function Tethering.DynamicCordRenderComponent.SetCordEndPointB
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             EndPointB                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDynamicCordRenderComponent::SetCordEndPointB(class USceneComponent* EndPointB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tethering.DynamicCordRenderComponent.SetCordEndPointB");
		
		UDynamicCordRenderComponent_SetCordEndPointB_Params params {};
		params.EndPointB = EndPointB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035FBD40
	 * 		Name   -> Function Tethering.DynamicCordRenderComponent.SetCordEndPointA
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             EndPointA                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDynamicCordRenderComponent::SetCordEndPointA(class USceneComponent* EndPointA)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tethering.DynamicCordRenderComponent.SetCordEndPointA");
		
		UDynamicCordRenderComponent_SetCordEndPointA_Params params {};
		params.EndPointA = EndPointA;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicCordRenderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicCordRenderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tethering.DynamicCordRenderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHarpoonRenderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHarpoonRenderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tethering.HarpoonRenderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTetherConstraintInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTetherConstraintInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tethering.TetherConstraintInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDistanceJointComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDistanceJointComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tethering.DistanceJointComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShouldTetherInWorldSpaceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShouldTetherInWorldSpaceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tethering.ShouldTetherInWorldSpaceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTetherQueriableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTetherQueriableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tethering.TetherQueriableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTetherCustomisationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTetherCustomisationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tethering.TetherCustomisationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTetherInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTetherInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tethering.TetherInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATether.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATether::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tethering.Tether");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTetherCustomisationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTetherCustomisationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tethering.TetherCustomisationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTetherInWorldSpaceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTetherInWorldSpaceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tethering.TetherInWorldSpaceComponent");
		return ptr;
	}

}


