//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIPRLikenessResolver-Protocol.h>

@class CNCache, CNContactStore, CNQueue, CNSchedulerProvider, NSString, PRPersonaStore;
@protocol CNSchedulerProvider, CNUIPRLikenessResolver, CNUIPlaceholderProviderFactory, OS_dispatch_source;

@interface CNUIPRLikenessResolver : NSObject <CNUIPRLikenessResolver>
{
    id <CNUIPRLikenessResolver> _likenessResolver;
    CNCache *_likenessCache;
    CNQueue *_evictionQueue;
    NSObject<OS_dispatch_source> *_memoryMonitoringSource;
    id <CNSchedulerProvider> _mainThreadSchedulerProvider;
    id <CNUIPlaceholderProviderFactory> _placeholderProviderFactory;
}

+ (id)_cacheKeyForContact:(id)arg1;
+ (id)descriptorForRequiredKeys;
@property(retain, nonatomic) id <CNUIPlaceholderProviderFactory> placeholderProviderFactory; // @synthesize placeholderProviderFactory=_placeholderProviderFactory;
@property(retain, nonatomic) id <CNSchedulerProvider> mainThreadSchedulerProvider; // @synthesize mainThreadSchedulerProvider=_mainThreadSchedulerProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource; // @synthesize memoryMonitoringSource=_memoryMonitoringSource;
@property(retain, nonatomic) CNQueue *evictionQueue; // @synthesize evictionQueue=_evictionQueue;
@property(retain, nonatomic) CNCache *likenessCache; // @synthesize likenessCache=_likenessCache;
@property(retain, nonatomic) id <CNUIPRLikenessResolver> likenessResolver; // @synthesize likenessResolver=_likenessResolver;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 scheduler:(id)arg3 meMonitor:(id)arg4;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 scheduler:(id)arg3;
@property(readonly, nonatomic) CNSchedulerProvider *schedulerProvider;
@property(readonly, nonatomic) PRPersonaStore *personaStore;
@property(readonly, nonatomic) CNContactStore *contactStore;
@property(nonatomic) long long prohibitedSources;
- (id)likenessLookup;
- (void)refreshCacheKey:(id)arg1;
- (id)likenessesForContact:(id)arg1;
- (id)resolveLikenessesForContacts:(id)arg1 withContentHandler:(CDUnknownBlockType)arg2;
- (void)emptyCache:(id)arg1;
- (void)dealloc;
- (id)initWithLikenessResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

