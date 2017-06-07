//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL, UIImage;

@interface NTKMicaDocument : NSObject
{
    NSString *_name;
    NSURL *_fileURL;
    NSDate *_lastSaveDate;
}

+ (id)documentWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSDate *lastSaveDate; // @synthesize lastSaveDate=_lastSaveDate;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) UIImage *thumbnailImage;
@property(readonly, nonatomic) NSString *thumbnailImageCacheKey;

@end
