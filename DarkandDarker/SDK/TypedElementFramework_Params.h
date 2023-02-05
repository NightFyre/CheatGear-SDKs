#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName
	 */
	struct UTestTypedElementInterfaceA_SetDisplayName_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                InNewName;                                               // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bNotify;                                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName
	 */
	struct UTestTypedElementInterfaceA_GetDisplayName_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested
	 */
	struct UTestTypedElementInterfaceB_MarkAsTested_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested
	 */
	struct UTestTypedElementInterfaceC_GetIsTested_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementHandleLibrary.Release
	 */
	struct UTypedElementHandleLibrary_Release_Params
	{
	public:
		struct FScriptTypedElementHandle                           ElementHandle;                                           // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementHandleLibrary.NotEqual
	 */
	struct UTypedElementHandleLibrary_NotEqual_Params
	{
	public:
		struct FScriptTypedElementHandle                           LHS;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FScriptTypedElementHandle                           RHS;                                                     // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementHandleLibrary.IsSet
	 */
	struct UTypedElementHandleLibrary_IsSet_Params
	{
	public:
		struct FScriptTypedElementHandle                           ElementHandle;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementHandleLibrary.Equal
	 */
	struct UTypedElementHandleLibrary_Equal_Params
	{
	public:
		struct FScriptTypedElementHandle                           LHS;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FScriptTypedElementHandle                           RHS;                                                     // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.Shrink
	 */
	struct UTypedElementListLibrary_Shrink_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.Reset
	 */
	struct UTypedElementListLibrary_Reset_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.Reserve
	 */
	struct UTypedElementListLibrary_Reserve_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    Size;                                                    // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.Remove
	 */
	struct UTypedElementListLibrary_Remove_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FScriptTypedElementHandle                           ElementHandle;                                           // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.Num
	 */
	struct UTypedElementListLibrary_Num_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.IsValidIndex
	 */
	struct UTypedElementListLibrary_IsValidIndex_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType
	 */
	struct UTypedElementListLibrary_HasElementsOfType_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class FName                                                ElementTypeName;                                         // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.HasElements
	 */
	struct UTypedElementListLibrary_HasElements_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class UClass*                                              BaseInterfaceType;                                       // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.GetElementInterface
	 */
	struct UTypedElementListLibrary_GetElementInterface_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FScriptTypedElementHandle                           ElementHandle;                                           // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UClass*                                              BaseInterfaceType;                                       // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.GetElementHandles
	 */
	struct UTypedElementListLibrary_GetElementHandles_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class UClass*                                              BaseInterfaceType;                                       // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FScriptTypedElementHandle>                   ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt
	 */
	struct UTypedElementListLibrary_GetElementHandleAt_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NHBF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FScriptTypedElementHandle                           ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.Empty
	 */
	struct UTypedElementListLibrary_Empty_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    Slack;                                                   // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList
	 */
	struct UTypedElementListLibrary_CreateScriptElementList_Params
	{
	public:
		class UTypedElementRegistry*                               Registry;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FScriptTypedElementListProxy                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType
	 */
	struct UTypedElementListLibrary_CountElementsOfType_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class FName                                                ElementTypeName;                                         // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.CountElements
	 */
	struct UTypedElementListLibrary_CountElements_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class UClass*                                              BaseInterfaceType;                                       // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.Contains
	 */
	struct UTypedElementListLibrary_Contains_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FScriptTypedElementHandle                           ElementHandle;                                           // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.Clone
	 */
	struct UTypedElementListLibrary_Clone_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FScriptTypedElementListProxy                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.AppendList
	 */
	struct UTypedElementListLibrary_AppendList_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FScriptTypedElementListProxy                        OtherElementList;                                        // 0x0010(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.Append
	 */
	struct UTypedElementListLibrary_Append_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FScriptTypedElementHandle>                   ElementHandles;                                          // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementListLibrary.Add
	 */
	struct UTypedElementListLibrary_Add_Params
	{
	public:
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FScriptTypedElementHandle                           ElementHandle;                                           // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementRegistry.GetInstance
	 */
	struct UTypedElementRegistry_GetInstance_Params
	{
	public:
		class UTypedElementRegistry*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementFramework.TypedElementRegistry.GetElementInterface
	 */
	struct UTypedElementRegistry_GetElementInterface_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UClass*                                              InBaseInterfaceType;                                     // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
