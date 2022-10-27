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
	 * Class AthenaObjectLinkage.EndPlayHandler
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UEndPlayHandler : public UObject
	{
	public:
		unsigned char                                              UnknownData_LI87[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnEndPlay(EEndPlayReason EndPlayReason);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaObjectLinkage.LinkEndpointIdUtilities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULinkEndpointIdUtilities : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsValid(const struct FLinkEndpointId& Id);
		bool STATIC_IsPathed(const struct FLinkEndpointId& Id);
		struct FLinkEndpointId STATIC_CreateEndpointId(const class FString& String);
		class FString STATIC_Conv_LinkEndpointIdToString(const struct FLinkEndpointId& Id);
		struct FLinkEndpointId STATIC_CombineEndpointIds(const struct FLinkEndpointId& Root, const struct FLinkEndpointId& path);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaObjectLinkage.LinkEndpointInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULinkEndpointInterface : public UInterface
	{
	public:
		void ReceiveLink(const struct FLinkEndpointId& Id, class AActor* Instance);
		void LoseLink(const struct FLinkEndpointId& Id);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaObjectLinkage.LinkerComponent
	 * Size -> 0x00D8 (FullSize[0x01A0] - InheritedSize[0x00C8])
	 */
	class ULinkerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_RRGW[0xC8];                                  // 0x00C8(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UEndPlayHandler*>                             EndPlayHandlers;                                         // 0x0190(0x0010) ZeroConstructor

	public:
		void UnregisterLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID);
		void UnregisterEndpoint(const struct FLinkEndpointId& Id);
		void SetParent(class AActor* Parent);
		EAddLinkResult RegisterLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID);
		EAddEndpointResult RegisterEndpoint(const struct FLinkEndpointId& Id, class AActor* Source);
		void OnEndpointRemovedFromChild(class AActor* Child, const struct FLinkEndpointId& Id);
		void OnEndpointAddedToChild(class AActor* Child, const struct FLinkEndpointId& Id, class AActor* Instance);
		class AActor* LookupEndpoint(const struct FLinkEndpointId& Id);
		int32_t GetNumSetLinks();
		int32_t GetNumRegisteredLinks();
		int32_t GetNumRegisteredEndpoints();
		int32_t GetNumPendingLinks();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaObjectLinkage.LinkerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULinkerInterface : public UInterface
	{
	public:
		void SetParent(class AActor* Parent);
		void RemoveLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID);
		void RemoveEndpoint(const struct FLinkEndpointId& Id);
		void OnEndpointRemovedFromChild(class AActor* Child, const struct FLinkEndpointId& Id);
		void OnEndpointAddedToChild(class AActor* Child, const struct FLinkEndpointId& Id, class AActor* Instance);
		class AActor* LookupEndpoint(const struct FLinkEndpointId& Id);
		bool AddLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID);
		bool AddEndpoint(const struct FLinkEndpointId& Id, class AActor* Instance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
