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
	 * 		RVA    -> 0x03B56BA0
	 * 		Name   -> Function AthenaRigging.InstancedRopeComponent.SetUnderwater
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Underwater                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInstancedRopeComponent::SetUnderwater(bool Underwater)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaRigging.InstancedRopeComponent.SetUnderwater");
		
		UInstancedRopeComponent_SetUnderwater_Params params {};
		params.Underwater = Underwater;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03B56A70
	 * 		Name   -> Function AthenaRigging.InstancedRopeComponent.SetRopes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FInstancedRopeParams>                InRopes                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UInstancedRopeComponent::SetRopes(TArray<struct FInstancedRopeParams> InRopes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaRigging.InstancedRopeComponent.SetRopes");
		
		UInstancedRopeComponent_SetRopes_Params params {};
		params.InRopes = InRopes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInstancedRopeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstancedRopeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaRigging.InstancedRopeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialExpressionRopeParameter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionRopeParameter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaRigging.MaterialExpressionRopeParameter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARiggingSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARiggingSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaRigging.RiggingSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03B56B20
	 * 		Name   -> Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InSocketSource                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URiggingSystemComponent::SetSocketLookupSource(class AActor* InSocketSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource");
		
		URiggingSystemComponent_SetSocketLookupSource_Params params {};
		params.InSocketSource = InSocketSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03B56850
	 * 		Name   -> Function AthenaRigging.RiggingSystemComponent.ConvertLineToRopeIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        InLineGroupName                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLineOffset                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t URiggingSystemComponent::ConvertLineToRopeIndex(const class FName& InLineGroupName, int32_t InLineOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaRigging.RiggingSystemComponent.ConvertLineToRopeIndex");
		
		URiggingSystemComponent_ConvertLineToRopeIndex_Params params {};
		params.InLineGroupName = InLineGroupName;
		params.InLineOffset = InLineOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URiggingSystemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URiggingSystemComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaRigging.RiggingSystemComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URopeCatenaryRenderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URopeCatenaryRenderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaRigging.RopeCatenaryRenderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03B569F0
	 * 		Name   -> Function AthenaRigging.RopeInterface.SetRopeUVOffset
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InUVOffset                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URopeInterface::SetRopeUVOffset(float InUVOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaRigging.RopeInterface.SetRopeUVOffset");
		
		URopeInterface_SetRopeUVOffset_Params params {};
		params.InUVOffset = InUVOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03B56910
	 * 		Name   -> Function AthenaRigging.RopeInterface.SetRopeEndpoints
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InWorldSpaceStart                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     InWorldSpaceEnd                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URopeInterface::SetRopeEndpoints(const struct FVector& InWorldSpaceStart, const struct FVector& InWorldSpaceEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaRigging.RopeInterface.SetRopeEndpoints");
		
		URopeInterface_SetRopeEndpoints_Params params {};
		params.InWorldSpaceStart = InWorldSpaceStart;
		params.InWorldSpaceEnd = InWorldSpaceEnd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URopeInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URopeInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaRigging.RopeInterface");
		return ptr;
	}

}


