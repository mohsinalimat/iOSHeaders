//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLImageSource.h>

@interface PLPhotoLibraryImageSource : PLImageSource
{
    int _imageFormat;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)newImageForAsset:(id)arg1 createMetadata:(id *)arg2;
- (id)description;
@property(readonly, nonatomic) int imageFormat;
- (unsigned short)sourceIdentifier;
- (id)initWithImageFormat:(int)arg1;

@end

