//
//  H2HModelGridTile.h
//  DemoCollectionView
//
//  Created by Pratima.Ghadage on 08/02/17.
//  Copyright © 2017 Pratima.Ghadage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum {
    GridTileTypeVideo,
    GridTileTypeChat,
    GridTileTypeWhiteboard,
    GridTileTypeTranscript
} EnumGridTileType;

@interface H2HModelGridTile : NSObject

@property(nonatomic) UIViewController  *viewControllerForTile;
@property(nonatomic) EnumGridTileType  gridTileType;
@end
