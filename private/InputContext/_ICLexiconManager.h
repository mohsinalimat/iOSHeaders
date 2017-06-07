//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputContext/_ICLexiconManaging-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, _ICTransientLexicon;
@protocol OS_dispatch_queue, _ICLexiconSourcing;

@interface _ICLexiconManager : NSObject <_ICLexiconManaging>
{
    NSObject<OS_dispatch_queue> *_lexiconManagerQueue;
    id <_ICLexiconSourcing> _lexiconSource;
    NSMutableDictionary *_contacts;
    NSMutableArray *_contactObservers;
    NSMutableOrderedSet *_recentNamedEntityQueue;
    NSMutableOrderedSet *_recentTokenizedNamedEntityQueue;
    _ICTransientLexicon *_namedEntityLexicon;
    _ICTransientLexicon *_untokenizedNamedEntityLexicon;
    NSArray *_lexicons;
    CDUnknownBlockType _filteringBlock;
    int _contactLoadState;
    int _namedEntityLoadState;
}

+ (unsigned long long)countWords:(id)arg1;
+ (int)tokenizeAndAddToLexicon:(id)arg1 namedEntity:(id)arg2 withQueue:(id)arg3 withQueueSize:(unsigned long long)arg4 withFilteringBlock:(CDUnknownBlockType)arg5;
+ (void)addToLexicon:(id)arg1 namedEntity:(id)arg2 withQueue:(id)arg3 withQueueSize:(unsigned long long)arg4 withFilteringBlock:(CDUnknownBlockType)arg5;
@property int namedEntityLoadState; // @synthesize namedEntityLoadState=_namedEntityLoadState;
@property int contactLoadState; // @synthesize contactLoadState=_contactLoadState;
- (void).cxx_destruct;
- (unsigned long long)getContactCount;
- (void)printLexiconToNSLog:(struct _LXLexicon *)arg1;
- (void)doLoadLexicon;
- (void)setContactHandlers:(id)arg1;
- (void)setNamedEntityHandlers:(id)arg1;
- (void)removeContact:(id)arg1;
- (void)addContact:(id)arg1;
- (void)removeContactObserver:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)addContactObserver:(CDUnknownBlockType)arg1;
- (void)unloadLexicons;
- (id)loadLexicons:(CDUnknownBlockType)arg1;
- (void)changeNamedEntityLoadingState:(int)arg1;
- (void)changeContactLoadingState:(int)arg1;
- (id)stateName:(int)arg1;
- (id)initWithLexiconSource:(id)arg1;

@end
