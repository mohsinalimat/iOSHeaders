//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFImage, SFPunchout, SFText;

@protocol SFMediaItem <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFImage *contentAdvisoryImage;
@property(copy, nonatomic) NSString *contentAdvisory;
@property(copy, nonatomic) NSArray *buyOptions;
@property(copy, nonatomic) NSArray *subtitleCustomLineBreaking;
@property(retain, nonatomic) SFPunchout *punchout;
@property(copy, nonatomic) NSString *reviewText;
@property(retain, nonatomic) SFImage *overlayImage;
@property(retain, nonatomic) SFImage *reviewGlyph;
@property(retain, nonatomic) SFImage *thumbnail;
@property(retain, nonatomic) SFText *subtitleText;
@property(copy, nonatomic) NSString *title;
@end

