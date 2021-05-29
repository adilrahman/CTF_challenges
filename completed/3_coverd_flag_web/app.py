from flask import Flask
from flask import render_template
from flask import url_for
from flask import Response

app = Flask(__name__)

@app.route("/enigma/ctf")
def clv():
    return render_template("cover_the_flag.html")


@app.route('/robots.txt')
def noindex():
    r = Response(response="User-Agent: *\nDisallow: /\n\t#enigma{I am what I am}", status=200, mimetype="text/plain")
    r.headers["Content-Type"] = "text/plain; charset=utf-8"
    return r
app.run(debug=True)
