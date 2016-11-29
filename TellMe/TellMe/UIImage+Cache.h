//
//  UIImage+Cache.h
//  ImageDownloader
//
//  Created by Juncheng Han on 11/9/16.
//  Copyright © 2016 Juncheng Han. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^DownloadCompletion)(BOOL seccess, UIImage *image, NSString *imageURL);

@interface UIImage (Cache)

+ (void)getImageWithURL:(NSString *)url completion:(DownloadCompletion)completion;

@end
