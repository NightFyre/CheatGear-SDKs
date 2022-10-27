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
	 * Class AndroidPermission.AndroidPermissionCallbackProxy
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UAndroidPermissionCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnPermissionsGrantedDynamicDelegate;                     // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T2VS[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AndroidPermission.AndroidPermissionFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_CheckPermission(const class FString& permission);
		class UAndroidPermissionCallbackProxy* STATIC_AcquirePermissions(TArray<class FString> Permissions);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
