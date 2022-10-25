#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class TypedElementRuntime.TypedElementAssetDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTypedElementAssetDataInterface : public UInterface
	{
	public:
		struct FAssetData GetAssetData(const struct FScriptTypedElementHandle& InElementHandle);
		TArray<struct FAssetData> GetAllReferencedAssetDatas(const struct FScriptTypedElementHandle& InElementHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class TypedElementRuntime.TypedElementHierarchyInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTypedElementHierarchyInterface : public UInterface
	{
	public:
		struct FScriptTypedElementHandle GetParentElement(const struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate);
		void GetChildElements(const struct FScriptTypedElementHandle& InElementHandle, TArray<struct FScriptTypedElementHandle>* OutElementHandles, bool bAllowCreate);
		static UClass* StaticClass();
	};

	/**
	 * Class TypedElementRuntime.TypedElementObjectInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTypedElementObjectInterface : public UInterface
	{
	public:
		class UClass* GetObjectClass(const struct FScriptTypedElementHandle& InElementHandle);
		class UObject* GetObject(const struct FScriptTypedElementHandle& InElementHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class TypedElementRuntime.TypedElementSelectionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTypedElementSelectionInterface : public UInterface
	{
	public:
		bool SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions);
		bool IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementIsSelectedOptions& InSelectionOptions);
		struct FScriptTypedElementHandle GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InCurrentSelection, ETypedElementSelectionMethod InSelectionMethod);
		bool DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions);
		bool CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
		bool CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
		bool AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet);
		static UClass* StaticClass();
	};

	/**
	 * Class TypedElementRuntime.TypedElementSelectionSet
	 * Size -> 0x0870 (FullSize[0x0898] - InheritedSize[0x0028])
	 */
	class UTypedElementSelectionSet : public UObject
	{
	public:
		unsigned char                                              UnknownData_FBK9[0x800];                                 // 0x0028(0x0800) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPreSelectionChange;                                    // 0x0828(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSelectionChange;                                       // 0x0838(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MP67[0x50];                                  // 0x0848(0x0050) MISSED OFFSET (PADDING)

	public:
		bool SetSelection(TArray<struct FScriptTypedElementHandle> InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions);
		bool SelectElements(TArray<struct FScriptTypedElementHandle> InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions);
		bool SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
		void RestoreSelectionState(const struct FTypedElementSelectionSetState& InSelectionState);
		void OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);
		void OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);
		TArray<struct FScriptTypedElementHandle> K2_GetSelectedElementHandles(class UClass* InBaseInterfaceType);
		bool IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementIsSelectedOptions& InSelectionOptions);
		bool HasSelectedObjects(class UClass* InRequiredClass);
		bool HasSelectedElements(class UClass* InBaseInterfaceType);
		class UObject* GetTopSelectedObject(class UClass* InRequiredClass);
		struct FScriptTypedElementHandle GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, ETypedElementSelectionMethod InSelectionMethod);
		TArray<class UObject*> GetSelectedObjects(class UClass* InRequiredClass);
		int32_t GetNumSelectedElements();
		struct FTypedElementSelectionSetState GetCurrentSelectionState();
		class UObject* GetBottomSelectedObject(class UClass* InRequiredClass);
		bool DeselectElements(TArray<struct FScriptTypedElementHandle> InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions);
		bool DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
		int32_t CountSelectedObjects(class UClass* InRequiredClass);
		int32_t CountSelectedElements(class UClass* InBaseInterfaceType);
		bool ClearSelection(const struct FTypedElementSelectionOptions& InSelectionOptions);
		bool CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
		bool CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);
		bool AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class TypedElementRuntime.TypedElementSelectionSetLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTypedElementSelectionSetLibrary : public UObject
	{
	public:
		bool STATIC_SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);
		bool STATIC_SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);
		struct FScriptTypedElementListProxy STATIC_GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions);
		struct FScriptTypedElementListProxy STATIC_GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions);
		bool STATIC_DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
