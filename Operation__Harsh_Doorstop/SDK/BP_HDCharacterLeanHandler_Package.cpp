/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickRot
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDCharacterLeanHandler_C::TickRot(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickRot");
		
		UBP_HDCharacterLeanHandler_C_TickRot_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickYOffset
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDCharacterLeanHandler_C::TickYOffset(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickYOffset");
		
		UBP_HDCharacterLeanHandler_C_TickYOffset_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickXOffset
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDCharacterLeanHandler_C::TickXOffset(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickXOffset");
		
		UBP_HDCharacterLeanHandler_C_TickXOffset_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPSpringArmComp
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USpringArmComponent*                         FPPSpringArm                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDCharacterLeanHandler_C::GetFPPSpringArmComp(class USpringArmComponent** FPPSpringArm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPSpringArmComp");
		
		UBP_HDCharacterLeanHandler_C_GetFPPSpringArmComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FPPSpringArm != nullptr)
			*FPPSpringArm = params.FPPSpringArm;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPCameraComp
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UCameraComponent*                            FPPCamera                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDCharacterLeanHandler_C::GetFPPCameraComp(class UCameraComponent** FPPCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPCameraComp");
		
		UBP_HDCharacterLeanHandler_C_GetFPPCameraComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FPPCamera != nullptr)
			*FPPCamera = params.FPPCamera;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPMeshComp
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      FPPMesh                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDCharacterLeanHandler_C::GetFPPMeshComp(class USkeletalMeshComponent** FPPMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPMeshComp");
		
		UBP_HDCharacterLeanHandler_C_GetFPPMeshComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FPPMesh != nullptr)
			*FPPMesh = params.FPPMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDCharacterLeanHandler_C::ReceiveTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.ReceiveTick");
		
		UBP_HDCharacterLeanHandler_C_ReceiveTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.ExecuteUbergraph_BP_HDCharacterLeanHandler
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDCharacterLeanHandler_C::ExecuteUbergraph_BP_HDCharacterLeanHandler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.ExecuteUbergraph_BP_HDCharacterLeanHandler");
		
		UBP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HDCharacterLeanHandler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HDCharacterLeanHandler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C");
		return ptr;
	}

}


