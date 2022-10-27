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
	 * Class TypedElementFramework.TypedElementCounterInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTypedElementCounterInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TypedElementFramework.TestTypedElementInterfaceA
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTestTypedElementInterfaceA : public UInterface
	{
	public:
		bool SetDisplayName(const struct FScriptTypedElementHandle& InElementHandle, const class FText& InNewName, bool bNotify);
		class FText GetDisplayName(const struct FScriptTypedElementHandle& InElementHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class TypedElementFramework.TestTypedElementInterfaceB
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTestTypedElementInterfaceB : public UInterface
	{
	public:
		bool MarkAsTested(const struct FScriptTypedElementHandle& InElementHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class TypedElementFramework.TestTypedElementInterfaceC
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTestTypedElementInterfaceC : public UInterface
	{
	public:
		bool GetIsTested(const struct FScriptTypedElementHandle& InElementHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTestTypedElementInterfaceA_ImplTyped : public UObject
	{
	public:
		unsigned char                                              UnknownData_GM7H[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTestTypedElementInterfaceA_ImplUntyped : public UObject
	{
	public:
		unsigned char                                              UnknownData_J7W0[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UTestTypedElementInterfaceBAndC_Typed : public UObject
	{
	public:
		unsigned char                                              UnknownData_VLQQ[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TypedElementFramework.TypedElementHandleLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTypedElementHandleLibrary : public UObject
	{
	public:
		void STATIC_Release(struct FScriptTypedElementHandle* ElementHandle);
		bool STATIC_NotEqual(const struct FScriptTypedElementHandle& LHS, const struct FScriptTypedElementHandle& RHS);
		bool STATIC_IsSet(const struct FScriptTypedElementHandle& ElementHandle);
		bool STATIC_Equal(const struct FScriptTypedElementHandle& LHS, const struct FScriptTypedElementHandle& RHS);
		static UClass* StaticClass();
	};

	/**
	 * Class TypedElementFramework.TypedElementListLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTypedElementListLibrary : public UObject
	{
	public:
		void STATIC_Shrink(const struct FScriptTypedElementListProxy& ElementList);
		void STATIC_Reset(const struct FScriptTypedElementListProxy& ElementList);
		void STATIC_Reserve(const struct FScriptTypedElementListProxy& ElementList, int32_t Size);
		bool STATIC_Remove(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle);
		int32_t STATIC_Num(const struct FScriptTypedElementListProxy& ElementList);
		bool STATIC_IsValidIndex(const struct FScriptTypedElementListProxy& ElementList, int32_t Index);
		bool STATIC_HasElementsOfType(const struct FScriptTypedElementListProxy& ElementList, const class FName& ElementTypeName);
		bool STATIC_HasElements(const struct FScriptTypedElementListProxy& ElementList, class UClass* BaseInterfaceType);
		class UObject* STATIC_GetElementInterface(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle, class UClass* BaseInterfaceType);
		TArray<struct FScriptTypedElementHandle> STATIC_GetElementHandles(const struct FScriptTypedElementListProxy& ElementList, class UClass* BaseInterfaceType);
		struct FScriptTypedElementHandle STATIC_GetElementHandleAt(const struct FScriptTypedElementListProxy& ElementList, int32_t Index);
		void STATIC_Empty(const struct FScriptTypedElementListProxy& ElementList, int32_t Slack);
		struct FScriptTypedElementListProxy STATIC_CreateScriptElementList(class UTypedElementRegistry* Registry);
		int32_t STATIC_CountElementsOfType(const struct FScriptTypedElementListProxy& ElementList, const class FName& ElementTypeName);
		int32_t STATIC_CountElements(const struct FScriptTypedElementListProxy& ElementList, class UClass* BaseInterfaceType);
		bool STATIC_Contains(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle);
		struct FScriptTypedElementListProxy STATIC_Clone(const struct FScriptTypedElementListProxy& ElementList);
		void STATIC_AppendList(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementListProxy& OtherElementList);
		void STATIC_Append(const struct FScriptTypedElementListProxy& ElementList, TArray<struct FScriptTypedElementHandle> ElementHandles);
		bool STATIC_Add(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class TypedElementFramework.TypedElementRegistry
	 * Size -> 0x0920 (FullSize[0x0948] - InheritedSize[0x0028])
	 */
	class UTypedElementRegistry : public UObject
	{
	public:
		unsigned char                                              UnknownData_KLPC[0x920];                                 // 0x0028(0x0920) MISSED OFFSET (PADDING)

	public:
		class UTypedElementRegistry* STATIC_GetInstance();
		class UObject* GetElementInterface(const struct FScriptTypedElementHandle& InElementHandle, class UClass* InBaseInterfaceType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
