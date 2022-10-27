#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum VaRest.EVaJson
	 */
	enum class EVaJson : uint8_t
	{
		None    = 0,
		Null    = 1,
		String  = 2,
		Number  = 3,
		Boolean = 4,
		Array   = 5,
		Object  = 6,
		MAX     = 7
	};

	/**
	 * Enum VaRest.EVaRestHttpStatusCode
	 */
	enum class EVaRestHttpStatusCode : uint8_t
	{
		Unknown          = 0,
		Continue         = 1,
		SwitchProtocol   = 2,
		Ok               = 3,
		Created          = 4,
		Accepted         = 5,
		Partial          = 6,
		NoContent        = 7,
		ResetContent     = 8,
		PartialContent   = 9,
		Ambiguous        = 10,
		Moved            = 11,
		Redirect         = 12,
		RedirectMethod   = 13,
		NotModified      = 14,
		UseProxy         = 15,
		RedirectKeepVerb = 16,
		BadRequest       = 17,
		Denied           = 18,
		PaymentReq       = 19,
		Forbidden        = 20,
		NotFound         = 21,
		BadMethod        = 22,
		NoneAcceptable   = 23,
		ProxyAuthReq     = 24,
		RequestTimeout   = 25,
		Conflict         = 26,
		Gone             = 27,
		LengthRequired   = 28,
		PrecondFailed    = 29,
		RequestTooLarge  = 30,
		UriTooLong       = 31,
		UnsupportedMedia = 32,
		TooManyRequests  = 33,
		RetryWith        = 34,
		ServerError      = 35,
		NotSupported     = 36,
		BadGateway       = 37,
		ServiceUnavail   = 38,
		GatewayTimeout   = 39,
		VersionNotSup    = 40,
		MAX              = 41
	};

	/**
	 * Enum VaRest.EVaRestRequestStatus
	 */
	enum class EVaRestRequestStatus : uint8_t
	{
		NotStarted             = 0,
		Processing             = 1,
		Failed                 = 2,
		Failed_ConnectionError = 3,
		Succeeded              = 4,
		MAX                    = 5
	};

	/**
	 * Enum VaRest.EVaRestRequestContentType
	 */
	enum class EVaRestRequestContentType : uint8_t
	{
		x_www_form_urlencoded_url  = 0,
		x_www_form_urlencoded_body = 1,
		json                       = 2,
		binary                     = 3,
		MAX                        = 4
	};

	/**
	 * Enum VaRest.EVaRestRequestVerb
	 */
	enum class EVaRestRequestVerb : uint8_t
	{
		GET    = 0,
		POST   = 1,
		PUT    = 2,
		DEL    = 3,
		CUSTOM = 4,
		MAX    = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct VaRest.VaRestCallResponse
	 * Size -> 0x0028
	 */
	struct FVaRestCallResponse
	{
	public:
		class UVaRestRequestJSON*                                  Request;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JDX3[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VaRest.VaRestURL
	 * Size -> 0x0068
	 */
	struct FVaRestURL
	{
	public:
		class FString                                              Protocol;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Host;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Valid;                                                   // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Map;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RedirectURL;                                             // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Op;                                                      // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class FString                                              Portal;                                                  // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
