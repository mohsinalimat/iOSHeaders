//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicEntityViewDescriptor.h>

@class MusicEntityValueContext, MusicEntityViewTracklistItemContentDescriptor, NSSet, NSString;

@interface MusicMediaProductTracklistTableViewDescriptor : MusicEntityViewDescriptor
{
    MusicEntityValueContext *_entityValueContext;
    NSSet *_propertiesToQueryForContentDescriptorResolution;
    NSString *_groupingProperty;
    NSString *_wantsGroupingProperty;
    MusicEntityViewTracklistItemContentDescriptor *_prominentTracklistItemContentDescriptor;
    long long _prominentTrackStoreID;
}

@property(nonatomic) long long prominentTrackStoreID; // @synthesize prominentTrackStoreID=_prominentTrackStoreID;
@property(retain, nonatomic) MusicEntityViewTracklistItemContentDescriptor *prominentTracklistItemContentDescriptor; // @synthesize prominentTracklistItemContentDescriptor=_prominentTracklistItemContentDescriptor;
@property(copy, nonatomic) NSString *wantsGroupingProperty; // @synthesize wantsGroupingProperty=_wantsGroupingProperty;
@property(copy, nonatomic) NSString *groupingProperty; // @synthesize groupingProperty=_groupingProperty;
- (void).cxx_destruct;
- (id)contentDescriptorForIndexPath:(id)arg1;
- (void)enumerateContentDescriptorsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)allowsSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(retain, nonatomic) MusicEntityViewTracklistItemContentDescriptor *defaultContentDescriptor; // @dynamic defaultContentDescriptor;

@end

