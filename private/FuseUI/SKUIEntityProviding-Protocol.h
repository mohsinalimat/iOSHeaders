//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/IKEntityProviding-Protocol.h>

@protocol IKEntityValueProviding, SKUIIndexBarEntryEntityValueProviding;

@protocol SKUIEntityProviding <IKEntityProviding>

@optional
- (id <IKEntityValueProviding>)sectionEntityValueProviderAtIndex:(long long)arg1;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (id <SKUIIndexBarEntryEntityValueProviding>)indexBarEntryEntityValueProviderAtIndex:(unsigned long long)arg1;
@end

