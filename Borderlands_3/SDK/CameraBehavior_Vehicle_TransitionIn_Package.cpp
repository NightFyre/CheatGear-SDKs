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
	 * 		Name   -> Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.Update
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCameraState*                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCameraBehavior_Vehicle_TransitionIn_C::Update(float DeltaTime, class UCameraState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.Update");
		
		UCameraBehavior_Vehicle_TransitionIn_C_Update_Params params {};
		params.DeltaTime = DeltaTime;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.Start
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UCameraState*                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCameraBehavior_Vehicle_TransitionIn_C::Start(class UCameraState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.Start");
		
		UCameraBehavior_Vehicle_TransitionIn_C_Start_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCameraBehavior_Vehicle_TransitionIn_C::ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn");
		
		UCameraBehavior_Vehicle_TransitionIn_C_ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_Vehicle_TransitionIn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_Vehicle_TransitionIn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C");
		return ptr;
	}

}


