//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXUIImageTile.h>

@class NSString, PXImageTitleSubtitleSpec, PXTitleSubtitleUILabel;

@interface PXUIImageTitleSubtitleTile : PXUIImageTile
{
    PXTitleSubtitleUILabel *_label;
    PXImageTitleSubtitleSpec *_spec;
    NSString *_title;
    NSString *_subtitle;
}

@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (id)view;

@end

