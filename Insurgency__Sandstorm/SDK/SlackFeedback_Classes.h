#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Class SlackFeedback.PrintDebugInfo
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPrintDebugInfo : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SlackFeedback.SlackFeedbackUploaderAsync
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class USlackFeedbackUploaderAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSendReportComplete;                                    // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UW0H[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (PADDING)

	public:
		class USlackFeedbackUploaderAsync* STATIC_BeginSlackSubmitFeedback(const class FString& UserFeedbackString, class APlayerController* PC, const class FString& Catagory, bool bIsBug);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
