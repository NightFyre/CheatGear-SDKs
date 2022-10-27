/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Message                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEasyAntiCheatNetComponent::ServerMessage(TArray<unsigned char> Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage");
		
		UEasyAntiCheatNetComponent_ServerMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Message                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEasyAntiCheatNetComponent::ClientMessage(TArray<unsigned char> Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage");
		
		UEasyAntiCheatNetComponent_ClientMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEasyAntiCheatNetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEasyAntiCheatNetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyAntiCheatCommon.EasyAntiCheatNetComponent");
		return ptr;
	}

}


