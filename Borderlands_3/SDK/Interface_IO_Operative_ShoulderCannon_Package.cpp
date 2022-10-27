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
	 * 		Name   -> Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonCreateLightProjectile
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_IO_Operative_ShoulderCannon_C::OperativeShoulderCannonCreateLightProjectile(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonCreateLightProjectile");
		
		UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonCreateLightProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonSetState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOperativeShoulderCannon                           NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_IO_Operative_ShoulderCannon_C::OperativeShoulderCannonSetState(EOperativeShoulderCannon NewState, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonSetState");
		
		UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonSetState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonReload
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_IO_Operative_ShoulderCannon_C::OperativeShoulderCannonReload(bool Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonReload");
		
		UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonReload_Params params {};
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeRemoveShoulderCannon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Fast                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_IO_Operative_ShoulderCannon_C::OperativeRemoveShoulderCannon(bool Fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeRemoveShoulderCannon");
		
		UInterface_IO_Operative_ShoulderCannon_C_OperativeRemoveShoulderCannon_Params params {};
		params.Fast = Fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonDigistructFinished
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DigistructIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_IO_Operative_ShoulderCannon_C::OperativeShoulderCannonDigistructFinished(bool DigistructIn, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonDigistructFinished");
		
		UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonDigistructFinished_Params params {};
		params.DigistructIn = DigistructIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeFireShoulderCannon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_IO_Operative_ShoulderCannon_C::OperativeFireShoulderCannon(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeFireShoulderCannon");
		
		UInterface_IO_Operative_ShoulderCannon_C_OperativeFireShoulderCannon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterface_IO_Operative_ShoulderCannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterface_IO_Operative_ShoulderCannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C");
		return ptr;
	}

}


