//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPUCellInvalidationContext : NSObject
{
    _Bool _invalidateEverything;
    _Bool _invalidateDownloadStatus;
    _Bool _invalidateLayout;
    _Bool _animated;
}

@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) _Bool invalidateLayout; // @synthesize invalidateLayout=_invalidateLayout;
@property(nonatomic) _Bool invalidateDownloadStatus; // @synthesize invalidateDownloadStatus=_invalidateDownloadStatus;
@property(nonatomic) _Bool invalidateEverything; // @synthesize invalidateEverything=_invalidateEverything;

@end

