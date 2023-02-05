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
	 * Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData
	 */
	struct UTypedElementAssetDataInterface_GetAssetData_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAssetData                                          ReturnValue;                                             // 0x0008(0x0060)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas
	 */
	struct UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FAssetData>                                  ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement
	 */
	struct UTypedElementHierarchyInterface_GetParentElement_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bAllowCreate;                                            // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z941[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FScriptTypedElementHandle                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements
	 */
	struct UTypedElementHierarchyInterface_GetChildElements_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FScriptTypedElementHandle>                   OutElementHandles;                                       // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bAllowCreate;                                            // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass
	 */
	struct UTypedElementObjectInterface_GetObjectClass_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementObjectInterface.GetObject
	 */
	struct UTypedElementObjectInterface_GetObject_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement
	 */
	struct UTypedElementSelectionInterface_SelectElement_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FScriptTypedElementListProxy                        InSelectionSet;                                          // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionOptions                       InSelectionOptions;                                      // 0x0018(0x0005)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected
	 */
	struct UTypedElementSelectionInterface_IsElementSelected_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FScriptTypedElementListProxy                        InSelectionSet;                                          // 0x0008(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FTypedElementIsSelectedOptions                      InSelectionOptions;                                      // 0x0018(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement
	 */
	struct UTypedElementSelectionInterface_GetSelectionElement_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FScriptTypedElementListProxy                        InCurrentSelection;                                      // 0x0008(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		ETypedElementSelectionMethod                               InSelectionMethod;                                       // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AJR9[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FScriptTypedElementHandle                           ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement
	 */
	struct UTypedElementSelectionInterface_DeselectElement_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FScriptTypedElementListProxy                        InSelectionSet;                                          // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionOptions                       InSelectionOptions;                                      // 0x0018(0x0005)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement
	 */
	struct UTypedElementSelectionInterface_CanSelectElement_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionOptions                       InSelectionOptions;                                      // 0x0008(0x0005)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement
	 */
	struct UTypedElementSelectionInterface_CanDeselectElement_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionOptions                       InSelectionOptions;                                      // 0x0008(0x0005)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers
	 */
	struct UTypedElementSelectionInterface_AllowSelectionModifiers_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FScriptTypedElementListProxy                        InSelectionSet;                                          // 0x0008(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.SetSelection
	 */
	struct UTypedElementSelectionSet_SetSelection_Params
	{
	public:
		TArray<struct FScriptTypedElementHandle>                   InElementHandles;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionOptions                       InSelectionOptions;                                      // 0x0010(0x0005)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.SelectElements
	 */
	struct UTypedElementSelectionSet_SelectElements_Params
	{
	public:
		TArray<struct FScriptTypedElementHandle>                   InElementHandles;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionOptions                       InSelectionOptions;                                      // 0x0010(0x0005)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.SelectElement
	 */
	struct UTypedElementSelectionSet_SelectElement_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionOptions                       InSelectionOptions;                                      // 0x0008(0x0005)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
	 */
	struct UTypedElementSelectionSet_RestoreSelectionState_Params
	{
	public:
		struct FTypedElementSelectionSetState                      InSelectionState;                                        // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature
	 */
	struct UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Params
	{
	public:
		class UTypedElementSelectionSet*                           SelectionSet;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
	 */
	struct UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Params
	{
	public:
		class UTypedElementSelectionSet*                           SelectionSet;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
	 */
	struct UTypedElementSelectionSet_K2_GetSelectedElementHandles_Params
	{
	public:
		class UClass*                                              InBaseInterfaceType;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FScriptTypedElementHandle>                   ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected
	 */
	struct UTypedElementSelectionSet_IsElementSelected_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTypedElementIsSelectedOptions                      InSelectionOptions;                                      // 0x0008(0x0001)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
	 */
	struct UTypedElementSelectionSet_HasSelectedObjects_Params
	{
	public:
		class UClass*                                              InRequiredClass;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
	 */
	struct UTypedElementSelectionSet_HasSelectedElements_Params
	{
	public:
		class UClass*                                              InBaseInterfaceType;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
	 */
	struct UTypedElementSelectionSet_GetTopSelectedObject_Params
	{
	public:
		class UClass*                                              InRequiredClass;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement
	 */
	struct UTypedElementSelectionSet_GetSelectionElement_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ETypedElementSelectionMethod                               InSelectionMethod;                                       // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G2PX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FScriptTypedElementHandle                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
	 */
	struct UTypedElementSelectionSet_GetSelectedObjects_Params
	{
	public:
		class UClass*                                              InRequiredClass;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UObject*>                                     ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
	 */
	struct UTypedElementSelectionSet_GetNumSelectedElements_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
	 */
	struct UTypedElementSelectionSet_GetCurrentSelectionState_Params
	{
	public:
		struct FTypedElementSelectionSetState                      ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
	 */
	struct UTypedElementSelectionSet_GetBottomSelectedObject_Params
	{
	public:
		class UClass*                                              InRequiredClass;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements
	 */
	struct UTypedElementSelectionSet_DeselectElements_Params
	{
	public:
		TArray<struct FScriptTypedElementHandle>                   InElementHandles;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionOptions                       InSelectionOptions;                                      // 0x0010(0x0005)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement
	 */
	struct UTypedElementSelectionSet_DeselectElement_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionOptions                       InSelectionOptions;                                      // 0x0008(0x0005)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
	 */
	struct UTypedElementSelectionSet_CountSelectedObjects_Params
	{
	public:
		class UClass*                                              InRequiredClass;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
	 */
	struct UTypedElementSelectionSet_CountSelectedElements_Params
	{
	public:
		class UClass*                                              InBaseInterfaceType;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection
	 */
	struct UTypedElementSelectionSet_ClearSelection_Params
	{
	public:
		struct FTypedElementSelectionOptions                       InSelectionOptions;                                      // 0x0000(0x0005)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement
	 */
	struct UTypedElementSelectionSet_CanSelectElement_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionOptions                       InSelectionOptions;                                      // 0x0008(0x0005)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement
	 */
	struct UTypedElementSelectionSet_CanDeselectElement_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionOptions                       InSelectionOptions;                                      // 0x0008(0x0005)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers
	 */
	struct UTypedElementSelectionSet_AllowSelectionModifiers_Params
	{
	public:
		struct FScriptTypedElementHandle                           InElementHandle;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList
	 */
	struct UTypedElementSelectionSetLibrary_SetSelectionFromList_Params
	{
	public:
		class UTypedElementSelectionSet*                           SelectionSet;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0008(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionOptions                       SelectionOptions;                                        // 0x0018(0x0005)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList
	 */
	struct UTypedElementSelectionSetLibrary_SelectElementsFromList_Params
	{
	public:
		class UTypedElementSelectionSet*                           SelectionSet;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0008(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionOptions                       SelectionOptions;                                        // 0x0018(0x0005)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection
	 */
	struct UTypedElementSelectionSetLibrary_GetNormalizedSelection_Params
	{
	public:
		class UTypedElementSelectionSet*                           SelectionSet;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionNormalizationOptions          NormalizationOptions;                                    // 0x0008(0x0002)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BUA5[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FScriptTypedElementListProxy                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList
	 */
	struct UTypedElementSelectionSetLibrary_GetNormalizedElementList_Params
	{
	public:
		class UTypedElementSelectionSet*                           SelectionSet;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0008(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionNormalizationOptions          NormalizationOptions;                                    // 0x0018(0x0002)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B84Y[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FScriptTypedElementListProxy                        ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList
	 */
	struct UTypedElementSelectionSetLibrary_DeselectElementsFromList_Params
	{
	public:
		class UTypedElementSelectionSet*                           SelectionSet;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FScriptTypedElementListProxy                        ElementList;                                             // 0x0008(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FTypedElementSelectionOptions                       SelectionOptions;                                        // 0x0018(0x0005)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
