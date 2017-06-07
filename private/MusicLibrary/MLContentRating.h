//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface MLContentRating : NSObject <NSCopying>
{
    NSMutableDictionary *_dictionary;
}

- (void).cxx_destruct;
- (void)_setValueCopy:(id)arg1 forKey:(id)arg2;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)copyStringRepresentation;
- (id)initWithStringRepresentation:(id)arg1;
@property(copy, nonatomic) NSString *ratingSystem;
@property(retain, nonatomic) NSNumber *ratingRank;
@property(copy, nonatomic) NSString *ratingLabel;
@property(copy, nonatomic) NSString *ratingDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentRatingDictionary:(id)arg1;
- (id)init;

@end

