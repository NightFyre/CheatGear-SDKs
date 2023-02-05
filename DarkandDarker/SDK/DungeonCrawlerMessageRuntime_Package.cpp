/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * 		Name   -> PredefinedFunction UBaseObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DungeonCrawlerMessageRuntime.BaseObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D3DBE0
	 * 		Name   -> Function DungeonCrawlerMessageRuntime.BaseInterface.UnbindMsgAll
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseInterface::UnbindMsgAll(class UObject* InObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.BaseInterface.UnbindMsgAll");
		
		UBaseInterface_UnbindMsgAll_Params params {};
		params.InObject = InObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D3DB10
	 * 		Name   -> Function DungeonCrawlerMessageRuntime.BaseInterface.UnbindMsg
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UScriptStruct*                               InMsgType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseInterface::UnbindMsg(class UScriptStruct* InMsgType, class UObject* InObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.BaseInterface.UnbindMsg");
		
		UBaseInterface_UnbindMsg_Params params {};
		params.InMsgType = InMsgType;
		params.InObject = InObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D3DAF0
	 * 		Name   -> Function DungeonCrawlerMessageRuntime.BaseInterface.TerminateBase
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UBaseInterface::TerminateBase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.BaseInterface.TerminateBase");
		
		UBaseInterface_TerminateBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D3C640
	 * 		Name   -> Function DungeonCrawlerMessageRuntime.BaseInterface.BroadcastMsgBlueprint
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InMsg                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseInterface::BroadcastMsgBlueprint(int32_t InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.BaseInterface.BroadcastMsgBlueprint");
		
		UBaseInterface_BroadcastMsgBlueprint_Params params {};
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DungeonCrawlerMessageRuntime.BaseInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D3C830
	 * 		Name   -> Function DungeonCrawlerMessageRuntime.MsgBaseNode.ReplyMsg
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InMsg                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMsgBaseNode::ReplyMsg(int32_t InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.MsgBaseNode.ReplyMsg");
		
		UMsgBaseNode_ReplyMsg_Params params {};
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D3C730
	 * 		Name   -> Function DungeonCrawlerMessageRuntime.MsgBaseNode.GetPayload
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OutRecvMsgType                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMsgBaseNode::GetPayload(int32_t* OutRecvMsgType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.MsgBaseNode.GetPayload");
		
		UMsgBaseNode_GetPayload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRecvMsgType != nullptr)
			*OutRecvMsgType = params.OutRecvMsgType;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMsgBaseNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMsgBaseNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DungeonCrawlerMessageRuntime.MsgBaseNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D3D8B0
	 * 		Name   -> Function DungeonCrawlerMessageRuntime.BindMsgNode.BindMsgNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScriptStruct*                               RecvMsgType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBindMsgNode* UBindMsgNode::STATIC_BindMsgNode(class UObject* Owner, class UScriptStruct* RecvMsgType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.BindMsgNode.BindMsgNode");
		
		UBindMsgNode_BindMsgNode_Params params {};
		params.Owner = Owner;
		params.RecvMsgType = RecvMsgType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBindMsgNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBindMsgNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DungeonCrawlerMessageRuntime.BindMsgNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D3D9D0
	 * 		Name   -> Function DungeonCrawlerMessageRuntime.BroadcastMsgNode.BroadcastMsgNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UScriptStruct*                               RecvMsgType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBroadcastMsgNode* UBroadcastMsgNode::STATIC_BroadcastMsgNode(class UObject* Owner, class UScriptStruct* RecvMsgType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.BroadcastMsgNode.BroadcastMsgNode");
		
		UBroadcastMsgNode_BroadcastMsgNode_Params params {};
		params.Owner = Owner;
		params.RecvMsgType = RecvMsgType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D3C560
	 * 		Name   -> Function DungeonCrawlerMessageRuntime.BroadcastMsgNode.BroadcastMsg
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InMsg                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBroadcastMsgNode::BroadcastMsg(int32_t InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.BroadcastMsgNode.BroadcastMsg");
		
		UBroadcastMsgNode_BroadcastMsg_Params params {};
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBroadcastMsgNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBroadcastMsgNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DungeonCrawlerMessageRuntime.BroadcastMsgNode");
		return ptr;
	}

}


