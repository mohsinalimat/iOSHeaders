//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

#import <DAEAS/NSCoding-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface ASChangedCollectionLeaf : ASItem <NSCoding>
{
    _Bool _isResponse;
    _Bool _validateOpeningTokens;
    unsigned long long _changeType;
    NSString *_serverID;
    NSString *_instanceID;
    NSString *_clientID;
    NSString *_parentClientID;
    NSNumber *_status;
    NSDictionary *_applicationData;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSDictionary *applicationData; // @synthesize applicationData=_applicationData;
@property(copy, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *parentClientID; // @synthesize parentClientID=_parentClientID;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) NSString *instanceID; // @synthesize instanceID=_instanceID;
@property(retain, nonatomic) NSString *serverID; // @synthesize serverID=_serverID;
@property(nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(nonatomic) _Bool validateOpeningTokens; // @synthesize validateOpeningTokens=_validateOpeningTokens;
@property(nonatomic) _Bool isResponse; // @synthesize isResponse=_isResponse;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)dataclass;
- (void)loadClientIDs;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)init;

@end

