//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/WDFieldMarker.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDHyperlinkFieldMarker : WDFieldMarker
{
    NSString *mLink;
    NSString *mFragment;
    unsigned int mInternalLink:1;
}

@property(retain, nonatomic) NSString *fragment; // @synthesize fragment=mFragment;
@property(retain, nonatomic) NSString *link; // @synthesize link=mLink;
@property(nonatomic) _Bool internalLink; // @synthesize internalLink=mInternalLink;
- (id)description;
- (void)dealloc;
- (int)runType;

@end

