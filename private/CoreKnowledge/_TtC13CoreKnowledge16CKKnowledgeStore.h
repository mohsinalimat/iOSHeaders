//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol _TtP13CoreKnowledge24CKKnowledgeStoreDelegate_;

@interface _TtC13CoreKnowledge16CKKnowledgeStore : NSObject
{
    // Error parsing type: , name: data
    // Error parsing type: , name: location
    // Error parsing type: , name: delegate
    // Error parsing type: , name: path
    // Error parsing type: , name: name
}

+ (id)knowledgeStoreWithName:(id)arg1;
+ (id)userDefaultsKnowledgeStore;
+ (id)inMemoryKnowledgeStore;
+ (id)defaultKnowledgeStore;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (_Bool)wipeAndReturnError:(id *)arg1;
- (_Bool)removeEntity:(id)arg1 error:(id *)arg2;
- (_Bool)dropLinks:(id)arg1 error:(id *)arg2;
- (_Bool)dropLinksFrom:(id)arg1 to:(id)arg2 withPredicate:(id)arg3 ignoreWeights:(_Bool)arg4 error:(id *)arg5;
- (void)dropLinksFrom:(id)arg1 to:(id)arg2 ignoreWeights:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)dropLinksFrom:(id)arg1 withPredicate:(id)arg2 error:(id *)arg3;
- (void)dropLinksFrom:(id)arg1 withPredicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importContentsOfJSONLDAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)linksWithBetween:(id)arg1 and:(id)arg2 error:(id *)arg3;
- (void)linksWithBetween:(id)arg1 and:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)triplesMatching:(id)arg1 error:(id *)arg2;
- (void)triplesMatching:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)subgraphWithEntities:(id)arg1;
- (id)entitiesAndReturnError:(id *)arg1;
@property(nonatomic, readonly) NSArray *keys;
- (id)entityWithIdentifier:(id)arg1;
- (_Bool)removeObjectForKey:(id)arg1 error:(id *)arg2;
-     // Error parsing type: (null), name: setObject:forKeyedSubscript:
-     // Error parsing type: (null), name: objectForKeyedSubscript:
- (id)writeBatch;
@property(nonatomic, readonly) long long hashValue;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) NSString *name; // @synthesize name;
@property(nonatomic, readonly) NSString *path; // @synthesize path;
@property(nonatomic, retain) id <_TtP13CoreKnowledge24CKKnowledgeStoreDelegate_> delegate; // @synthesize delegate;
- (_Bool)importJSONLDWithData:(id)arg1 error:(id *)arg2;
- (_Bool)evaluateJSONLDEntryForEntity:(id)arg1 key:(id)arg2 value:(id)arg3 error:(id *)arg4;
- (_Bool)inferLinkTo:(id)arg1 withPredicate:(id)arg2 when:(id)arg3 error:(id *)arg4;

@end

