//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreKnowledge/CKAbstractKnowledgeStorage.h>

@class NSArray, NSUserDefaults, _TtC13CoreKnowledge15CKSQLConnection;

@interface _TtC13CoreKnowledge30CKUserDefaultsKnowledgeStorage : CKAbstractKnowledgeStorage
{
    // Error parsing type: , name: kv
}

- (CDUnknownBlockType).cxx_destruct;
- (_Bool)wipeAndReturnError:(id *)arg1;
- (_Bool)removeObjectsMatching:(id)arg1 error:(id *)arg2;
- (_Bool)removeObjectForKey:(id)arg1 error:(id *)arg2;
- (id)writeBatch;
- (id)tripleComponentsMatching:(id)arg1 error:(id *)arg2;
-     // Error parsing type: (null), name: objectForKeyedSubscript:
@property(nonatomic, readonly) NSArray *values;
@property(nonatomic, readonly) NSArray *keys;
@property(nonatomic, readonly) _Bool closed;
@property(nonatomic, readonly) _TtC13CoreKnowledge15CKSQLConnection *sql;
- (void)synchronize;
- (id)init;
@property(nonatomic, retain) NSUserDefaults *kv; // @synthesize kv;

@end

