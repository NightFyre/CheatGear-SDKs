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
	 * 		Name   -> Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeFlowState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasFlow                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_IO_ExplodingPipe_C::GetPipeFlowState(bool* HasFlow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeFlowState");
		
		UBPI_IO_ExplodingPipe_C_GetPipeFlowState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasFlow != nullptr)
			*HasFlow = params.HasFlow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeDestroyedState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Destroyed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_IO_ExplodingPipe_C::GetPipeDestroyedState(bool* Destroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeDestroyedState");
		
		UBPI_IO_ExplodingPipe_C_GetPipeDestroyedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Destroyed != nullptr)
			*Destroyed = params.Destroyed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_IO_ExplodingPipe_DestroyedState               PipeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_IO_ExplodingPipe_C::SetPipeState(Enum_IO_ExplodingPipe_DestroyedState PipeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeState");
		
		UBPI_IO_ExplodingPipe_C_SetPipeState_Params params {};
		params.PipeState = PipeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeFlowState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasFlow                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_IO_ExplodingPipe_C::SetPipeFlowState(bool HasFlow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeFlowState");
		
		UBPI_IO_ExplodingPipe_C_SetPipeFlowState_Params params {};
		params.HasFlow = HasFlow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.DestroyPipe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_IO_ExplodingPipe_C::DestroyPipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.DestroyPipe");
		
		UBPI_IO_ExplodingPipe_C_DestroyPipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_IO_ExplodingPipe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_IO_ExplodingPipe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C");
		return ptr;
	}

}


