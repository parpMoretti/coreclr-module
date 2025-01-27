class PlayerPosition {
    constructor() {
        this.position = {x: 0, y: 0, z: 0};
        this.update = null;
        alt.on("playerPosition", (x, y, z) => {
            this.position.x = x;
            this.position.y = y;
            this.position.z = z;
            if (this.update) {
                this.update(this.position);
            }
        })
    }

    getPosition() {
        return this.position;
    }
}

export default new PlayerPosition();