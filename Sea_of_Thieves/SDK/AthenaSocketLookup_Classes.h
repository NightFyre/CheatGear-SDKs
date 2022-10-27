#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class AthenaSocketLookup.SocketIdTestFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USocketIdTestFunctions : public UBlueprintFunctionLibrary
	{
	public:
		struct FSocketId STATIC_MakeSocketIdWithInvalidName(const class FString& InPath);
		struct FSocketId STATIC_MakeSocketIdWithEmptyPath(const class FName& InSocketName);
		struct FSocketId STATIC_MakeSocketId(const class FString& InPath, const class FName& InSocketName);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaSocketLookup.SocketLookupCacheTestFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USocketLookupCacheTestFunctions : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsInCache(struct FSocketLookupCache* InCache, const struct FSocketId& InSocketId);
		bool STATIC_AddToCache(struct FSocketLookupCache* InCache, const struct FSocketId& InSocketId, class USceneComponent* InSceneComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaSocketLookup.SocketLookupFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USocketLookupFunctions : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_TryGetSocketTransformWithCache(struct FSocketLookupCache* Cache, class AActor* InActor, const struct FSocketId& InSocketId, struct FTransform* OutTransform);
		bool STATIC_TryGetSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, struct FTransform* OutTransform, ERelativeTransformSpace Space);
		bool STATIC_TryGetRelativeSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, class USceneComponent* RelativeTo, struct FTransform* OutTransform);
		class USceneComponent* STATIC_TryFindSocketOwner(class AActor* InActor, const struct FSocketId& InSocketId);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaSocketLookup.SocketLookupInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USocketLookupInterface : public UInterface
	{
	public:
		bool FindSocket(const struct FSocketId& InSocketId, struct FTransform* OutTransform);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
